/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:20 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/IKPlayerEventMarshaling.h>

@class NSString, NSDictionary;

@interface IKPlayerTimeDidChangeEventUserInfo : NSObject <IKPlayerEventMarshaling> {

	double _interval;
	double _elapsedTime;

}

@property (nonatomic,readonly) double interval;                        //@synthesize interval=_interval - In the implementation block
@property (nonatomic,readonly) double elapsedTime;                     //@synthesize elapsedTime=_elapsedTime - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSDictionary * properties; 
-(id)initWithInterval:(double)arg1 elapsedTime:(double)arg2 ;
-(double)elapsedTime;
-(NSDictionary *)properties;
-(double)interval;
@end
