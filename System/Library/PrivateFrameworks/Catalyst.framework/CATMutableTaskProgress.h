/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:33 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Catalyst/CATTaskProgress.h>

@class NSError, NSDictionary;

@interface CATMutableTaskProgress : CATTaskProgress

@property (assign,nonatomic) unsigned long long phase; 
@property (nonatomic,retain) id resultObject; 
@property (nonatomic,retain) NSError * error; 
@property (nonatomic,retain) NSDictionary * userInfo; 
@property (assign,nonatomic) BOOL isCancelable; 
@property (assign,nonatomic) BOOL isCanceled; 
@property (assign,nonatomic) long long completedUnitCount; 
@property (assign,nonatomic) long long totalUnitCount; 
-(void)setResultObject:(id)arg1 ;
-(id)initWithOperationUUID:(id)arg1 ;
-(id)initWithOperationUUID:(id)arg1 requestClass:(Class)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setProgress:(id)arg1 ;
@end

