//
//  HRPGPurchaseLoadingButton.h
//  Habitica
//
//  Created by Phillip Thelen on 02/06/15.
//  Copyright © 2017 HabitRPG Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef enum {
    HRPGPurchaseButtonStateLabel = 0,
    HRPGPurchaseButtonStateConfirm,
    HRPGPurchaseButtonStateLoading,
    HRPGPurchaseButtonStateDone,
    HRPGPurchaseButtonStateError
} HRPGPurchaseButtonState;

@interface HRPGPurchaseLoadingButton : UIView

@property(nonatomic) NSString *text;
@property(nonatomic) NSString *confirmText;
@property(nonatomic) NSString *doneText;
@property(nonatomic) UIColor *tintColor;
@property(nonatomic) HRPGPurchaseButtonState state;
@property(nonatomic, copy) void (^onTouchEvent)(HRPGPurchaseLoadingButton *purchaseButton);

@end
