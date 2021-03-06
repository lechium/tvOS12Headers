/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:58:49 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GEOResourceFiltersManagerDelegate;
@class GEOResourceManifestConfiguration, GEOActiveResourceFilters, NSLock, NSSet;

@interface GEOResourceFiltersManager : NSObject {

	GEOResourceManifestConfiguration* _configuration;
	GEOActiveResourceFilters* _activeFilters;
	NSLock* _lock;
	id<GEOResourceFiltersManagerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<GEOResourceFiltersManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSSet * activeScales; 
@property (nonatomic,readonly) NSSet * activeScenarios; 
-(void)_writeToDisk;
-(NSSet *)activeScales;
-(void)_deactivateFilters:(/*^block*/id)arg1 ;
-(NSSet *)activeScenarios;
-(void)_activateFilters:(/*^block*/id)arg1 setValueBlock:(/*^block*/id)arg2 ;
-(void)activateScale:(int)arg1 ;
-(void)deactivateScale:(int)arg1 ;
-(void)activateScenario:(int)arg1 ;
-(void)deactivateScenario:(int)arg1 ;
-(id)init;
-(void)setDelegate:(id<GEOResourceFiltersManagerDelegate>)arg1 ;
-(id<GEOResourceFiltersManagerDelegate>)delegate;
-(id)initWithConfiguration:(id)arg1 ;
@end

