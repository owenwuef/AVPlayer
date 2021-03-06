//
//  CardViewController.h
//  APP4
//
//  Created by apple on 12-12-24.
//  Copyright (c) 2012年 FreeBox. All rights reserved.
//

/*
 自定义TableViewCell步骤
 1. 新增一个类customCell，父类是UITableViewCell
 2. 新增一个空的xib，加入一个UITableViewCell，在xib中把类型改为customCell
 3. 把xib的fileowner的类型改为那个使用cell的viewController
 4. 把xib的identifier写成tableView中的identifier
 4. 把xib中的UITableViewCell按control拖入viewController中（mCardCell）
 5. 在viewController中创建一个UINib
 6. 在viewDidLoad中初始化UINib，即nibWithNibName。。。
 7. 在tableView的delegate中，对UINib使用instantiateWithOwner，然后让cell=self.mCardCell;
*/

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>

#import "CardSetViewController.h"

#import "CardCell.h"

#import "CustomBarView.h"
#import "MicrophoneButton.h"
#import "AddButton.h"
#import "SettingButton.h"
#import "PlayButton.h"
#import "PopMenu.h"
#import "LETGlossaryManagement.h"

@interface CardViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, UIScrollViewDelegate>

@property (assign, nonatomic) NSInteger glossaryIndex;

@property (copy, nonatomic) NSString *savePath;
@property (copy, nonatomic) NSString *videoPath;
@property (copy, nonatomic) NSString *subtitlePath;

@property (strong, nonatomic) UINib *cellNib;
@property (strong, nonatomic) NSMutableArray *contentsData;
@property (strong, nonatomic) NSMutableArray *countOfRecord;
@property (strong, nonatomic) AVAudioPlayer *audioPlayer;
@property (strong, nonatomic) AVAudioRecorder *audioRecorder;
@property (strong, nonatomic) NSTimer *timer;
@property (assign, nonatomic) BOOL isRecording;
@property (assign, nonatomic) NSInteger currentPage;
@property (strong, nonatomic) UITapGestureRecognizer *tapGesture;

@property (strong, nonatomic) CustomBarView *customBarView;
@property (strong, nonatomic) AddButton *addBtn;
@property (strong, nonatomic) SettingButton *settingBtn;
@property (strong, nonatomic) MicrophoneButton *microphoneBtn;
@property (strong, nonatomic) PlayButton *playBtn;
@property (strong, nonatomic) PopMenu *popMenu;

@property (weak, nonatomic) IBOutlet UITableView *mTableView;
@property (strong, nonatomic) IBOutlet CardCell *mCardCell;
@property (weak, nonatomic) IBOutlet UILabel *countLbl;

@end
