//
//  PwdTF.h
//  PasswordTF
//
//  Created by zhaoke on 2018/2/27.
//  Copyright © 2018年 Accentrix. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PwdTF : UITextField

@property (strong, nonatomic) void(^pwdInputComplete)(NSString *pwd);
@property (strong, nonatomic) void(^pwdInputChange)(NSString *currentPwd);

@end
