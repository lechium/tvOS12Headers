/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:04 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PSIDatabase;

@interface PLSearchProcessor : NSObject {

	PSIDatabase* _searchIndex;

}

@property (nonatomic,readonly) PSIDatabase * searchIndex;              //@synthesize searchIndex=_searchIndex - In the implementation block
+(id)searchProcessorLog;
-(void)_extractSearchResultsFromGroupResults:(id)arg1 withQuery:(id)arg2 resultsHandler:(/*^block*/id)arg3 ;
-(id)_numberOfAssetsSortDescriptors;
-(id)_searchResultsByCategoryMasksForSearchResults:(id)arg1 ;
-(BOOL)_shouldOmitSectionForCategoryMask:(unsigned long long)arg1 ;
-(BOOL)_categoryMaskIsCombinable:(unsigned long long)arg1 ;
-(id)_sortDescriptorsForCategoryMask:(unsigned long long)arg1 ;
-(id)_dateSortDescriptors;
-(id)_alphabeticalSortDescriptors;
-(id)initWithDatabase:(id)arg1 ;
-(void)performQuery:(id)arg1 withResultsHandler:(/*^block*/id)arg2 ;
-(id)searchResultSectionsWithAssetResults:(id)arg1 collectionResults:(id)arg2 tripResults:(id)arg3 combineAssetSections:(BOOL)arg4 ;
-(id)updatedSearchSections:(id)arg1 withTopCollectionResults:(id)arg2 ;
-(id)completionSuggestionsForQuery:(id)arg1 withSearchSections:(id)arg2 numberOfSuggestions:(unsigned long long)arg3 ;
-(PSIDatabase *)searchIndex;
@end

