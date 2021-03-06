/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:15 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class HMMediaSession, HMAccessorySettings;


@protocol HMMediaObject <NSObject>
@property (__weak) id<HMMediaObjectDelegate> delegate; 
@property (copy,readonly) HMMediaSession * mediaSession; 
@property (readonly) HMAccessorySettings * settings; 
@required
-(HMMediaSession *)mediaSession;
-(void)setDelegate:(id)arg1;
-(id<HMMediaObjectDelegate>)delegate;
-(HMAccessorySettings *)settings;

@end

