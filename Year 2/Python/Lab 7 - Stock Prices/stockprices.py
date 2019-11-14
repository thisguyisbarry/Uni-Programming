def get_data_list(file_name):
    """Opens a file and places each row/line into a list of lists
        Used for comma separated value files
        Note: You may wish to delete the header line in the csv file"""
    data_file = open(file_name, "r")
    data_list = []  # start with an empty list
    for line_str in data_file:  # strip end-of-line, split on
        # commas, and append items to list
        data_list.append(line_str.strip().split(','))

    return data_list


def get_dict_months(data_list):
    """Takes in a list of list containing month information
       for each list inside the list of lists where
       the first element is in the format yyyy-mm-dd"""

    month_dict = {}
    volumes_dict = {}

    for list_element in data_list:
        # Sets the key to be the first 7 characters (yyyy-mm)
        # Sets the value to be an element of a list containing the volume times the Adj. Close Volume for each data
        month_dict[list_element[0][:-3]] += (float(list_element[6]) * float(list_element[7])

        # Populates a dictionary with the sum of all volumes per month
        volumes_dict[list_element[0][:-3]] += (float(list_element[6]))
        volumes_dict[list_element[0][:-3]] += (float(list_element[6]))


def main():
    stock_data = get_data_list("table.csv")  # Pass name of file to function



main()
