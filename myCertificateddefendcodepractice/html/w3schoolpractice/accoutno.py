class BankAccount:
    def __int__(self, account_number):
        self.account_number = account_number
        self.balance = 0
    def deposit(self, amount):
        self.balance += amount
        def widthdraw(self, amount):
            if self.balance >= amount:
                self.balanace -= amount
            else:
                print("insufficient fund")
                def display_balance(self):
                    print("the account number {self.account_number}")
                    print(f"The current balance: {self.balance}")
                    #usage
                    account1 = BankAccount("12345679")
                    account.deposit(2000)
                    """account"""