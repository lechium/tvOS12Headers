/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:37 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol HFDiffOperation <NSObject,NAEquatable>
@property (nonatomic,readonly) unsigned long long type; 
@property (nonatomic,copy,readonly) NSString * operationDescription; 
@required
-(NSString *)operationDescription;
-(unsigned long long)type;

@end

