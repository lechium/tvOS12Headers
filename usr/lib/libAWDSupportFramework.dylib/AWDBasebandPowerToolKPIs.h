/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:45 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDBasebandPowerToolKPIs : PBCodable <NSCopying> {

	SCD_Struct_AW14* _armUtilityPDFs;
	SCD_Struct_AW14* _causeCodeBackgroundActivityARMUtilitys;
	SCD_Struct_AW14* _causeCodeBackgroundActivityDurations;
	SCD_Struct_AW14* _causeCodeCumulativeARMUtilitys;
	SCD_Struct_AW14* _causeCodeCumulativeDurations;
	SCD_Struct_AW14* _causeCodeMarginalCoverageARMUtilitys;
	SCD_Struct_AW14* _causeCodeMarginalCoverageDurations;
	SCD_Struct_AW14* _causeCodeOOSARMUtilitys;
	SCD_Struct_AW14* _causeCodeOOSDurations;
	SCD_Struct_AW14* _causeCodeRACHFailARMUtilitys;
	SCD_Struct_AW14* _causeCodeRACHFailDurations;
	SCD_Struct_AW14* _causeCodeStruckInDCHARMUtilitys;
	SCD_Struct_AW14* _causeCodeStruckInDCHDurations;
	SCD_Struct_AW14* _causeCodeTcXONotShuttingARMUtilitys;
	SCD_Struct_AW14* _causeCodeTcXONotShuttingDurations;
	SCD_Struct_AW14* _causeCodeUnknownARMUtilitys;
	SCD_Struct_AW14* _causeCodeUnknownDurations;
	unsigned long long _timestamp;
	int _armUtilityThresholdPoint;
	int _radarPriority;
	SCD_Struct_AW4 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                                                  //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasRadarPriority; 
@property (assign,nonatomic) int radarPriority;                                                             //@synthesize radarPriority=_radarPriority - In the implementation block
@property (assign,nonatomic) BOOL hasArmUtilityThresholdPoint; 
@property (assign,nonatomic) int armUtilityThresholdPoint;                                                  //@synthesize armUtilityThresholdPoint=_armUtilityThresholdPoint - In the implementation block
@property (nonatomic,readonly) unsigned long long armUtilityPDFsCount; 
@property (nonatomic,readonly) int* armUtilityPDFs; 
@property (nonatomic,readonly) unsigned long long causeCodeOOSARMUtilitysCount; 
@property (nonatomic,readonly) int* causeCodeOOSARMUtilitys; 
@property (nonatomic,readonly) unsigned long long causeCodeOOSDurationsCount; 
@property (nonatomic,readonly) int* causeCodeOOSDurations; 
@property (nonatomic,readonly) unsigned long long causeCodeTcXONotShuttingARMUtilitysCount; 
@property (nonatomic,readonly) int* causeCodeTcXONotShuttingARMUtilitys; 
@property (nonatomic,readonly) unsigned long long causeCodeTcXONotShuttingDurationsCount; 
@property (nonatomic,readonly) int* causeCodeTcXONotShuttingDurations; 
@property (nonatomic,readonly) unsigned long long causeCodeBackgroundActivityARMUtilitysCount; 
@property (nonatomic,readonly) int* causeCodeBackgroundActivityARMUtilitys; 
@property (nonatomic,readonly) unsigned long long causeCodeBackgroundActivityDurationsCount; 
@property (nonatomic,readonly) int* causeCodeBackgroundActivityDurations; 
@property (nonatomic,readonly) unsigned long long causeCodeRACHFailARMUtilitysCount; 
@property (nonatomic,readonly) int* causeCodeRACHFailARMUtilitys; 
@property (nonatomic,readonly) unsigned long long causeCodeRACHFailDurationsCount; 
@property (nonatomic,readonly) int* causeCodeRACHFailDurations; 
@property (nonatomic,readonly) unsigned long long causeCodeStruckInDCHARMUtilitysCount; 
@property (nonatomic,readonly) int* causeCodeStruckInDCHARMUtilitys; 
@property (nonatomic,readonly) unsigned long long causeCodeStruckInDCHDurationsCount; 
@property (nonatomic,readonly) int* causeCodeStruckInDCHDurations; 
@property (nonatomic,readonly) unsigned long long causeCodeMarginalCoverageARMUtilitysCount; 
@property (nonatomic,readonly) int* causeCodeMarginalCoverageARMUtilitys; 
@property (nonatomic,readonly) unsigned long long causeCodeMarginalCoverageDurationsCount; 
@property (nonatomic,readonly) int* causeCodeMarginalCoverageDurations; 
@property (nonatomic,readonly) unsigned long long causeCodeUnknownARMUtilitysCount; 
@property (nonatomic,readonly) int* causeCodeUnknownARMUtilitys; 
@property (nonatomic,readonly) unsigned long long causeCodeUnknownDurationsCount; 
@property (nonatomic,readonly) int* causeCodeUnknownDurations; 
@property (nonatomic,readonly) unsigned long long causeCodeCumulativeARMUtilitysCount; 
@property (nonatomic,readonly) int* causeCodeCumulativeARMUtilitys; 
@property (nonatomic,readonly) unsigned long long causeCodeCumulativeDurationsCount; 
@property (nonatomic,readonly) int* causeCodeCumulativeDurations; 
-(unsigned long long)armUtilityPDFsCount;
-(void)clearArmUtilityPDFs;
-(int)armUtilityPDFAtIndex:(unsigned long long)arg1 ;
-(void)addArmUtilityPDF:(int)arg1 ;
-(unsigned long long)causeCodeOOSARMUtilitysCount;
-(void)clearCauseCodeOOSARMUtilitys;
-(int)causeCodeOOSARMUtilityAtIndex:(unsigned long long)arg1 ;
-(void)addCauseCodeOOSARMUtility:(int)arg1 ;
-(unsigned long long)causeCodeOOSDurationsCount;
-(void)clearCauseCodeOOSDurations;
-(int)causeCodeOOSDurationsAtIndex:(unsigned long long)arg1 ;
-(void)addCauseCodeOOSDurations:(int)arg1 ;
-(unsigned long long)causeCodeTcXONotShuttingARMUtilitysCount;
-(void)clearCauseCodeTcXONotShuttingARMUtilitys;
-(int)causeCodeTcXONotShuttingARMUtilityAtIndex:(unsigned long long)arg1 ;
-(void)addCauseCodeTcXONotShuttingARMUtility:(int)arg1 ;
-(unsigned long long)causeCodeTcXONotShuttingDurationsCount;
-(void)clearCauseCodeTcXONotShuttingDurations;
-(int)causeCodeTcXONotShuttingDurationsAtIndex:(unsigned long long)arg1 ;
-(void)addCauseCodeTcXONotShuttingDurations:(int)arg1 ;
-(unsigned long long)causeCodeBackgroundActivityARMUtilitysCount;
-(void)clearCauseCodeBackgroundActivityARMUtilitys;
-(int)causeCodeBackgroundActivityARMUtilityAtIndex:(unsigned long long)arg1 ;
-(void)addCauseCodeBackgroundActivityARMUtility:(int)arg1 ;
-(unsigned long long)causeCodeBackgroundActivityDurationsCount;
-(void)clearCauseCodeBackgroundActivityDurations;
-(int)causeCodeBackgroundActivityDurationsAtIndex:(unsigned long long)arg1 ;
-(void)addCauseCodeBackgroundActivityDurations:(int)arg1 ;
-(unsigned long long)causeCodeRACHFailARMUtilitysCount;
-(void)clearCauseCodeRACHFailARMUtilitys;
-(int)causeCodeRACHFailARMUtilityAtIndex:(unsigned long long)arg1 ;
-(void)addCauseCodeRACHFailARMUtility:(int)arg1 ;
-(unsigned long long)causeCodeRACHFailDurationsCount;
-(void)clearCauseCodeRACHFailDurations;
-(int)causeCodeRACHFailDurationsAtIndex:(unsigned long long)arg1 ;
-(void)addCauseCodeRACHFailDurations:(int)arg1 ;
-(unsigned long long)causeCodeStruckInDCHARMUtilitysCount;
-(void)clearCauseCodeStruckInDCHARMUtilitys;
-(int)causeCodeStruckInDCHARMUtilityAtIndex:(unsigned long long)arg1 ;
-(void)addCauseCodeStruckInDCHARMUtility:(int)arg1 ;
-(unsigned long long)causeCodeStruckInDCHDurationsCount;
-(void)clearCauseCodeStruckInDCHDurations;
-(int)causeCodeStruckInDCHDurationsAtIndex:(unsigned long long)arg1 ;
-(void)addCauseCodeStruckInDCHDurations:(int)arg1 ;
-(unsigned long long)causeCodeMarginalCoverageARMUtilitysCount;
-(void)clearCauseCodeMarginalCoverageARMUtilitys;
-(int)causeCodeMarginalCoverageARMUtilityAtIndex:(unsigned long long)arg1 ;
-(void)addCauseCodeMarginalCoverageARMUtility:(int)arg1 ;
-(unsigned long long)causeCodeMarginalCoverageDurationsCount;
-(void)clearCauseCodeMarginalCoverageDurations;
-(int)causeCodeMarginalCoverageDurationsAtIndex:(unsigned long long)arg1 ;
-(void)addCauseCodeMarginalCoverageDurations:(int)arg1 ;
-(unsigned long long)causeCodeUnknownARMUtilitysCount;
-(void)clearCauseCodeUnknownARMUtilitys;
-(int)causeCodeUnknownARMUtilityAtIndex:(unsigned long long)arg1 ;
-(void)addCauseCodeUnknownARMUtility:(int)arg1 ;
-(unsigned long long)causeCodeUnknownDurationsCount;
-(void)clearCauseCodeUnknownDurations;
-(int)causeCodeUnknownDurationsAtIndex:(unsigned long long)arg1 ;
-(void)addCauseCodeUnknownDurations:(int)arg1 ;
-(unsigned long long)causeCodeCumulativeARMUtilitysCount;
-(void)clearCauseCodeCumulativeARMUtilitys;
-(int)causeCodeCumulativeARMUtilityAtIndex:(unsigned long long)arg1 ;
-(void)addCauseCodeCumulativeARMUtility:(int)arg1 ;
-(unsigned long long)causeCodeCumulativeDurationsCount;
-(void)clearCauseCodeCumulativeDurations;
-(int)causeCodeCumulativeDurationsAtIndex:(unsigned long long)arg1 ;
-(void)addCauseCodeCumulativeDurations:(int)arg1 ;
-(void)setRadarPriority:(int)arg1 ;
-(void)setHasRadarPriority:(BOOL)arg1 ;
-(BOOL)hasRadarPriority;
-(void)setArmUtilityThresholdPoint:(int)arg1 ;
-(void)setHasArmUtilityThresholdPoint:(BOOL)arg1 ;
-(BOOL)hasArmUtilityThresholdPoint;
-(int*)armUtilityPDFs;
-(void)setArmUtilityPDFs:(int*)arg1 count:(unsigned long long)arg2 ;
-(int*)causeCodeOOSARMUtilitys;
-(void)setCauseCodeOOSARMUtilitys:(int*)arg1 count:(unsigned long long)arg2 ;
-(int*)causeCodeOOSDurations;
-(void)setCauseCodeOOSDurations:(int*)arg1 count:(unsigned long long)arg2 ;
-(int*)causeCodeTcXONotShuttingARMUtilitys;
-(void)setCauseCodeTcXONotShuttingARMUtilitys:(int*)arg1 count:(unsigned long long)arg2 ;
-(int*)causeCodeTcXONotShuttingDurations;
-(void)setCauseCodeTcXONotShuttingDurations:(int*)arg1 count:(unsigned long long)arg2 ;
-(int*)causeCodeBackgroundActivityARMUtilitys;
-(void)setCauseCodeBackgroundActivityARMUtilitys:(int*)arg1 count:(unsigned long long)arg2 ;
-(int*)causeCodeBackgroundActivityDurations;
-(void)setCauseCodeBackgroundActivityDurations:(int*)arg1 count:(unsigned long long)arg2 ;
-(int*)causeCodeRACHFailARMUtilitys;
-(void)setCauseCodeRACHFailARMUtilitys:(int*)arg1 count:(unsigned long long)arg2 ;
-(int*)causeCodeRACHFailDurations;
-(void)setCauseCodeRACHFailDurations:(int*)arg1 count:(unsigned long long)arg2 ;
-(int*)causeCodeStruckInDCHARMUtilitys;
-(void)setCauseCodeStruckInDCHARMUtilitys:(int*)arg1 count:(unsigned long long)arg2 ;
-(int*)causeCodeStruckInDCHDurations;
-(void)setCauseCodeStruckInDCHDurations:(int*)arg1 count:(unsigned long long)arg2 ;
-(int*)causeCodeMarginalCoverageARMUtilitys;
-(void)setCauseCodeMarginalCoverageARMUtilitys:(int*)arg1 count:(unsigned long long)arg2 ;
-(int*)causeCodeMarginalCoverageDurations;
-(void)setCauseCodeMarginalCoverageDurations:(int*)arg1 count:(unsigned long long)arg2 ;
-(int*)causeCodeUnknownARMUtilitys;
-(void)setCauseCodeUnknownARMUtilitys:(int*)arg1 count:(unsigned long long)arg2 ;
-(int*)causeCodeUnknownDurations;
-(void)setCauseCodeUnknownDurations:(int*)arg1 count:(unsigned long long)arg2 ;
-(int*)causeCodeCumulativeARMUtilitys;
-(void)setCauseCodeCumulativeARMUtilitys:(int*)arg1 count:(unsigned long long)arg2 ;
-(int*)causeCodeCumulativeDurations;
-(void)setCauseCodeCumulativeDurations:(int*)arg1 count:(unsigned long long)arg2 ;
-(int)radarPriority;
-(int)armUtilityThresholdPoint;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

