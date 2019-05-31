/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:57 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VCRedundancyControlAlgorithm <NSObject>
@property (nonatomic,readonly) unsigned redundancyPercentage; 
@property (nonatomic,readonly) double redundancyInterval; 
@required
-(void)updateRedundancyStrategyWithNetworkStatistics:(SCD_Struct_AV19)arg1;
-(unsigned)redundancyPercentage;
-(double)redundancyInterval;

@end

