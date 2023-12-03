class Bank():
    def __init__(self, id):
        self.id = id
    
    def create_account(self, name, id, password):
        self.name = name
        self.id = id
        self.password = password

class User(Bank):
    def __init__(self, id, wallet):
        self.history = []
        self.wallet = wallet
        super().__init__(id)
    
    def deposit_amount(self, money):
        self.wallet += money
        self.history.append(f'deposit: {money}')
    
    def withdrawal_amount(self, money):
        if(self.wallet >= money):
            self.wallet -= money
            self.history.append(f'withdrow: {money} and wallet: {self.wallet}')
        else:
            f'The bank is backrupt.'
        
    def transfer_amount(self, Other_id, money):
        if(self.wallet >= money):
            Other_id.wallet += money
            self.wallet -= money
            self.history.append(f'transfer: {money} {self.id} to {Other_id}')
            Other_id.history.append(f'take money from {self.id}')
        else:
            f'Cannot transfer'
    
    def transaction_history(self):
        return self.history
    
    def take_loan(self, loan_feature):
        if(loan_feature == True):
            loan = self.wallet*2
            self.wallet += loan
            self.history.append(f'take a loan: {loan}')
        else:
            f'Can not take loan' 
            
    
class Admin(Bank):
    def __init__(self, id) :
        super().__init__(id)
        self.total_balance = 0
        self.total_loan = 0
        self.loan_feature = True
    
    def check_balance(self):
        return self.total_balance
    
    def loan_amount(self):
        return self.total_loan
    
    def loan_feature_on(self):
         self.loan_feature = True
    
    def loan_feature_off(self):
        self.loan_feature = False
    
    
            
    
    
    
    
