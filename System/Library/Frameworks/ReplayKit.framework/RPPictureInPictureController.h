/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:58 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class RPPictureInPictureWindow;

@interface RPPictureInPictureController : NSObject {

	RPPictureInPictureWindow* _pictureInPictureWindow;

}

@property (nonatomic,retain) RPPictureInPictureWindow * pictureInPictureWindow;              //@synthesize pictureInPictureWindow=_pictureInPictureWindow - In the implementation block
+(id)sharedController;
-(void)setPictureInPictureWindow:(RPPictureInPictureWindow *)arg1 ;
-(void)showPictureInPictureWindowWithContentView:(id)arg1 ;
-(void)hidePictureInPictureWindow;
-(RPPictureInPictureWindow *)pictureInPictureWindow;
@end

