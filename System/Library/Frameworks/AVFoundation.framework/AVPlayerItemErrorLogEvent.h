/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:58:38 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AVPlayerItemErrorLogEventInternal, NSDate, NSString;

@interface AVPlayerItemErrorLogEvent : NSObject <NSCopying> {

	AVPlayerItemErrorLogEventInternal* _playerItemErrorLogEvent;

}

@property (nonatomic,readonly) NSDate * date; 
@property (nonatomic,readonly) NSString * URI; 
@property (nonatomic,readonly) NSString * serverAddress; 
@property (nonatomic,readonly) NSString * playbackSessionID; 
@property (nonatomic,readonly) long long errorStatusCode; 
@property (nonatomic,readonly) NSString * errorDomain; 
@property (nonatomic,readonly) NSString * errorComment; 
-(void)finalize;
-(id)_common_init;
-(NSString *)errorDomain;
-(NSString *)serverAddress;
-(NSString *)playbackSessionID;
-(long long)errorStatusCode;
-(NSString *)errorComment;
-(NSString *)URI;
-(id)init;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDate *)date;
-(id)initWithDictionary:(id)arg1 ;
@end

