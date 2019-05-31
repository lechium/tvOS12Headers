/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:55 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraKit/CameraKit-Structs.h>
#import <CameraKit/CMKFocusAttachmentView.h>

@interface CMKFocusLockAttachmentView : CMKFocusAttachmentView {

	BOOL _locked;

}

@property (assign,getter=isLocked,nonatomic) BOOL locked;              //@synthesize locked=_locked - In the implementation block
-(void)_updateText;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)isLocked;
-(void)setLocked:(BOOL)arg1 ;
@end

