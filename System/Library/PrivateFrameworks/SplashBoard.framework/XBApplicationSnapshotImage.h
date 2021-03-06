/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:28 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/SplashBoard.framework/SplashBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIImage.h>

@class XBApplicationSnapshot;

@interface XBApplicationSnapshotImage : UIImage {

	XBApplicationSnapshot* _snapshot;
	long long _interfaceOrientation;

}

@property (nonatomic,readonly) long long interfaceOrientation;              //@synthesize interfaceOrientation=_interfaceOrientation - In the implementation block
-(id)initWithSnapshot:(id)arg1 interfaceOrientation:(long long)arg2 ;
-(void)dealloc;
-(id)description;
-(long long)interfaceOrientation;
@end

