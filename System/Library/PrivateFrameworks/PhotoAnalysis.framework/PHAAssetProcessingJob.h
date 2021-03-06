/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:24 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoAnalysis/PhotoAnalysis-Structs.h>
#import <PhotoAnalysis/PHAWorkerJob.h>

@class NSArray, NSRecursiveLock, NSMutableDictionary;

@interface PHAAssetProcessingJob : PHAWorkerJob {

	NSArray* _assetLocalIdentifiers;
	NSRecursiveLock* _resultsLock;
	NSMutableDictionary* _resultsByAssetLocalIdentifier;

}

@property (readonly) NSRecursiveLock * resultsLock;                                              //@synthesize resultsLock=_resultsLock - In the implementation block
@property (nonatomic,copy,readonly) NSArray * incompleteAssetLocalIdentifiers; 
@property (nonatomic,readonly) NSMutableDictionary * resultsByAssetLocalIdentifier;              //@synthesize resultsByAssetLocalIdentifier=_resultsByAssetLocalIdentifier - In the implementation block
@property (nonatomic,readonly) NSArray * assetLocalIdentifiers;                                  //@synthesize assetLocalIdentifiers=_assetLocalIdentifiers - In the implementation block
-(BOOL)finished;
-(unsigned long long)resultCount;
-(float)completionScore;
-(id)initWithWorkerType:(short)arg1 scenario:(unsigned long long)arg2 assetLocalIdentifiers:(id)arg3 library:(id)arg4 ;
-(NSArray *)assetLocalIdentifiers;
-(unsigned long long)resultForAssetLocalIdentifier:(id)arg1 ;
-(id)statusAsDictionary;
-(void)reportResult:(unsigned long long)arg1 forAssetLocalIdentifier:(id)arg2 ;
-(id)_resultsCopy;
-(unsigned long long)successfulResultCount;
-(NSArray *)incompleteAssetLocalIdentifiers;
-(NSRecursiveLock *)resultsLock;
-(NSMutableDictionary *)resultsByAssetLocalIdentifier;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

