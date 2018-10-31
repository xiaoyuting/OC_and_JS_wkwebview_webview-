 

#import "ViewController.h"
#import "WKWebViewController.h"

@interface ViewController ()
@property (weak, nonatomic) IBOutlet UITextField *urlText;

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (IBAction)loadingAction:(UIButton *)sender {
    WKWebViewController *web = [[WKWebViewController alloc] init];
    //[web loadWebURLSring:self.urlText.text];
    [web loadWebHTMLSring:@"index"];
    [self.navigationController pushViewController:web animated:YES];
}
- (void)touchesBegan:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event{
    [self.urlText endEditing:YES];
}
@end
