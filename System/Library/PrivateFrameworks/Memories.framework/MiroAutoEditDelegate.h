/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:19 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class Project, MiroMemory, MiroAutoEditLogger;


@protocol MiroAutoEditDelegate <NSObject>
@property (nonatomic,readonly) Project * project; 
@property (nonatomic,readonly) MiroMemory * activeMemory; 
@property (nonatomic,readonly) MiroAutoEditLogger * logger; 
@property (nonatomic,readonly) BOOL titleIsSupported; 
@optional
-(BOOL)titleIsSupported;
-(id)trimRangeForClip:(id)arg1;

@required
-(Project *)project;
-(MiroAutoEditLogger *)logger;
-(MiroMemory *)activeMemory;

@end

