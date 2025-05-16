import qrcode as QG
import os

def gen_qr_from_file(input_file_path,target_folderName="QrCode_outputImages"):
    
    try:
        abs_target_folder = os.path.abspath(target_folderName)
        os.makedirs(abs_target_folder, exist_ok=True)
    except Exception as e:
        print(e) 
    
    try:
        abs_input_file_path = os.path.abspath(input_file_path)
        with open(abs_input_file_path, "r") as f:
            lines = f.readlines()
        print(f"Successfully read {len(lines)} lines from '{abs_input_file_path}'.")
    except FileNotFoundError:
        print(f"Error: The file '{os.path.abspath(input_file_path)}' was not found.")
        return
    except Exception as e:
        print(f"Error reading file '{os.path.abspath(input_file_path)}': {e}")
        return



    current_qr_text = None
    output_qr_filename=None

    for index, raw_line in enumerate(lines):
        line_content = raw_line.strip()

        if index % 2 == 0:
            current_qr_text = line_content
            print(f"Line {index} (Text for QR): '{current_qr_text}'")
        
        else:
            output_qr_filename = line_content
            print(f"Line {index} (Output Filename): '{output_qr_filename}'")

            try:
                 full_save_path = os.path.join(abs_target_folder, output_qr_filename)
            except Exception as e:
                print(e)
                return
            

            qr_image = QG.make(current_qr_text)
            qr_image.save(full_save_path)
            print(f"  Successfully generated and saved '{output_qr_filename}'")
      
                



gen_qr_from_file("qrRequirements.txt")
'''
without Qr code folder name default parameter will placed automatically...
you can give Qr directory name from here.
   example : 
   gen_qr_from_file("qrRequirements.txt","QRs_folder_name")''' 