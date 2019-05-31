/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:54 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface IMDMessagePTask : NSObject {

	NSString* _guid;
	unsigned long long _taskFlags;

}

@property (nonatomic,readonly) NSString * guid;                           //@synthesize guid=_guid - In the implementation block
@property (nonatomic,readonly) unsigned long long taskFlags;              //@synthesize taskFlags=_taskFlags - In the implementation block
-(NSString *)guid;
-(BOOL)needsProccesingFor:(unsigned long long)arg1 ;
-(void)compeletedTask:(unsigned long long)arg1 ;
-(id)initWithGUID:(id)arg1 ;
-(void)setTaskFlag:(unsigned long long)arg1 ;
-(id)initWithStoreDictionary:(id)arg1 ;
-(unsigned long long)taskFlags;
-(void)dealloc;
@end

