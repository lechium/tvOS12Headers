/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:21 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol FBSProcess <NSObject>
@property (nonatomic,readonly) int pid; 
@property (nonatomic,copy,readonly) NSString * bundleIdentifier; 
@required
-(int)pid;
-(NSString *)bundleIdentifier;

@end

