/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:10 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/GEOCategorySuggestionsManagerServerProxy.h>

@class NSString;

@interface _GEOCategorySuggestionsManagerLocalProxy : NSObject <GEOCategorySuggestionsManagerServerProxy> {

	int _urlsChangedToken;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_updateIfNecessary;
-(void)updateCachedSpotlightCategorySuggestions:(/*^block*/id)arg1 ;
-(id)init;
-(void)dealloc;
@end

