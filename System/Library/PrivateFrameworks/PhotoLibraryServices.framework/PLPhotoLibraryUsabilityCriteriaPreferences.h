/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:07 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PLPersonClusterUsabilityPreferences.h>

@class NSString;

@interface PLPhotoLibraryUsabilityCriteriaPreferences : NSObject <PLPersonClusterUsabilityPreferences>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) unsigned long long unverifiedFaceCountThreshold; 
@property (nonatomic,readonly) unsigned long long maxUnverifiedClusters; 
-(unsigned long long)unverifiedFaceCountThreshold;
-(void)setUnverifiedFaceCountThreshold:(unsigned long long)arg1 ;
-(unsigned long long)maxUnverifiedClusters;
@end

