/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:19 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGAbstractSuggester.h>
#import <libobjc.A.dylib/PGCoordinatableSuggester.h>

@class PGSuggestionOptions, NSArray, NSEnumerator, NSDictionary, NSString;

@interface PGLivePhotoVariationSuggester : PGAbstractSuggester <PGCoordinatableSuggester> {

	PGSuggestionOptions* _options;
	NSArray* _suggestedAssets;
	NSEnumerator* _suggestedAssetEnumerator;
	NSDictionary* _variationResults;
	BOOL _doLoop;
	BOOL _doLongExposure;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)suggestionTypes;
+(id)suggestionSubtypes;
-(id)suggestedAssetsInAssets:(id)arg1 options:(id)arg2 ;
-(id)suggestedAssetsInAssets:(id)arg1 ;
-(id)suggestionsWithOptions:(id)arg1 progress:(/*^block*/id)arg2 ;
-(void)startSuggestingWithOptions:(id)arg1 ;
-(id)nextSuggestion;
-(void)_setDoFlagsWithOptions:(id)arg1 ;
-(id)livePhotosBetweenStartDate:(id)arg1 andEndDate:(id)arg2 ;
-(void)enumerateLivePhotosAndVariationSuggestionWithLivePhotos:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)suggestionWithAsset:(id)arg1 ;
-(id)recipeForVariationWithLivePhoto:(id)arg1 inResults:(id)arg2 suggestionSubtype:(unsigned short*)arg3 ;
-(void)reset;
@end
