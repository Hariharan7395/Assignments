#check if the file is empty
def is_file_empty(file_path):
    try:
        with open(file_path,'r') as file:
            #check if the file have any content
            return len(file.read().strip())==0
    except FileNotFoundError:
        print("The file was not found")
        return True

#copying the input file to the output file except 5th line
def copy_file(input_file,output_file):
    if is_file_empty(input_file):
        print("The file is empty")
        return
    try:
        with open(input_file,'r') as infile, open(output_file,'w') as outfile:
            skip_line=5
            line_number=1
            for line in infile:
                if line_number != skip_line:
                    outfile.write(line)
                line_number+=1
        print("File copied successfully")
    except FileNotFoundError:
        print("File was not found")

input_file='input.txt'
output_file='output.txt'
copy_file(input_file, output_file)
