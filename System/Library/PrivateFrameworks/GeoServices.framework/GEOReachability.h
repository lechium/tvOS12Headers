/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:06 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/GEOResourceManifestTileGroupObserver.h>

@class NSString;

@interface GEOReachability : NSObject <GEOResourceManifestTileGroupObserver> {

	BOOL _networkReachable;
	unsigned long long _errorCount;
	int _symptomsAlternateAdviceToken;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedReachability;
-(void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1 ;
-(void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1 ;
-(void)_reachabilityChanged:(id)arg1 ;
-(void)_resetErrors;
-(void)reportTileLoadSuccess:(id)arg1 ;
-(BOOL)anyFailures;
-(void)reportLoadFailure:(id)arg1 ;
-(BOOL)networkAvailable;
-(id)init;
-(void)dealloc;
@end
