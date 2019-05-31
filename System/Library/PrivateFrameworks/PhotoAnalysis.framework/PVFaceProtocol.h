/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:25 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSData;


@protocol PVFaceProtocol <NSObject>
@property (nonatomic,readonly) NSString * localIdentifier; 
@property (nonatomic,readonly) NSString * personLocalIdentifier; 
@property (nonatomic,readonly) double size; 
@property (nonatomic,readonly) double centerX; 
@property (nonatomic,readonly) double centerY; 
@property (nonatomic,readonly) long long clusterSequenceNumber; 
@property (nonatomic,readonly) NSData * faceprintData; 
@property (assign,nonatomic) long long qualityMeasure; 
@required
-(long long)qualityMeasure;
-(long long)clusterSequenceNumber;
-(void)setQualityMeasure:(long long)arg1;
-(NSString *)localIdentifier;
-(NSString *)personLocalIdentifier;
-(double)centerX;
-(double)centerY;
-(NSData *)faceprintData;
-(double)size;

@end

