//
//  FirstViewController.h
//  APP4
//
//  Created by apple on 12-12-20.
//  Copyright (c) 2012年 FreeBox. All rights reserved.
//


//设置两个同心圆，在圆周上等间距位置显示海报
//通过手势识别启动动画
//启用NSTimer，计算每一个时间点，所有海报的位置

#import <UIKit/UIKit.h>
#import "ASIHTTPRequest.h"

@class ButtonView;
@class LabelView;

@interface FirstViewController : UIViewController

@property (strong, nonatomic) UITapGestureRecognizer *tapGesture;

@property (copy, nonatomic) NSString *posterPath;
@property (strong, nonatomic) NSMutableArray *postersName;
@property (strong, nonatomic) NSMutableArray *posters;
@property (strong, nonatomic) NSMutableArray *postersCenterY;

@property (assign, nonatomic) float currentTime;
@property (strong) NSTimer *timer;

@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) NSString *userPassword;

@property (weak, nonatomic) IBOutlet UIView *menuView;
@property (weak, nonatomic) IBOutlet LabelView *titleLbl;
@property (weak, nonatomic) IBOutlet ButtonView *videoBtn;
@property (weak, nonatomic) IBOutlet ButtonView *glossaryBtn;

@property (strong, nonatomic) ASIHTTPRequest *request;


@property (strong, nonatomic) IBOutlet UITextField *loginIDTF;
@property (strong, nonatomic) IBOutlet UITextField *loginPasswordTF;
@property (strong, nonatomic) IBOutlet UIButton *loginBtn;

- (IBAction)loginID:(id)sender;
- (IBAction)loginPassword:(id)sender;
- (IBAction)login:(id)sender;

- (IBAction)videoPressed:(id)sender;
- (IBAction)glossaryPressed:(id)sender;



@end
