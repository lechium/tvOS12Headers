/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:36 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol MFQueueingStrategy <NSObject>
@property (nonatomic,readonly) NSString * descriptionType; 
@required
-(void)enqueueObject:(id)arg1 buffer:(id)arg2;
-(NSString *)descriptionType;
-(void)dequeueObject:(id)arg1 buffer:(id)arg2;

@end

