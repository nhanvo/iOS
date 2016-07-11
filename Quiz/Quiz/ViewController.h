//
//  ViewController.h
//  Quiz
//
//  Created by Nhan Vo on 7/10/16.
//  Copyright © 2016 Nhan Vo. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController {
    int currentQuestionIndex;
    
    // model object
    NSMutableArray *questions;
    NSMutableArray *answers;
    
    // view object
    IBOutlet UILabel *questionField;
    IBOutlet UILabel *answerField;
}

- (IBAction)showQuestion:(id)sender;
- (IBAction)showAnswer:(id)sender;

@end

