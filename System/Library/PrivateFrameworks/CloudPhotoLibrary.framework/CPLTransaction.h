/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:46 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CPLTransaction : NSObject
+(void)beginTransactionWithReason:(id)arg1 keepPower:(BOOL)arg2 ;
+(void)endTransactionWithReason:(id)arg1 ;
+(unsigned long long)transactionCount;
+(id)transactions;
@end

