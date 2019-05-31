/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:19 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGAbstractSuggester.h>
#import <libobjc.A.dylib/PGSuggester.h>

@class NSString;

@interface PGTripSharingSuggester : PGAbstractSuggester <PGSuggester>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)suggestionTypes;
+(id)suggestionSubtypes;
+(BOOL)shouldSuggestCollectionNode:(id)arg1 ;
-(id)suggestionsWithOptions:(id)arg1 progress:(/*^block*/id)arg2 ;
@end

