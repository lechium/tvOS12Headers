/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:28 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSError, NSArray;


@protocol MPMiddlewareOperation <NSObject>
@property (nonatomic,readonly) NSError * error; 
@property (nonatomic,copy) id invalidationHandler; 
@property (nonatomic,readonly) NSArray * invalidationObservers; 
@optional
-(id)timeoutDescription;

@required
-(NSArray *)invalidationObservers;
-(id)invalidationHandler;
-(void)setInvalidationHandler:(/*^block*/id)arg1;
-(NSError *)error;

@end

