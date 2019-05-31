/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:55 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIActivityViewController.h>

@protocol SiriUIActivityViewControllerDelegate;
@interface SiriUIActivityViewController : UIActivityViewController {

	id<SiriUIActivityViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SiriUIActivityViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id<SiriUIActivityViewControllerDelegate>)arg1 ;
-(id<SiriUIActivityViewControllerDelegate>)delegate;
-(void)dismissViewControllerAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
@end

