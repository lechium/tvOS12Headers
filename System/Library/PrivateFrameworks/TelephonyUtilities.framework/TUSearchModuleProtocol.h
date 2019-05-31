/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:38 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class TUSearchResults, TUSearchController;


@protocol TUSearchModuleProtocol <NSObject>
@property (getter=isSearchComplete,readonly) BOOL searchComplete; 
@property (readonly) TUSearchResults * searchResults; 
@property (__weak) TUSearchController * searchController; 
@optional
-(TUSearchController *)searchController;
-(void)setSearchController:(id)arg1;

@required
-(void)cancelSearch;
-(void)searchForString:(id)arg1 completion:(/*^block*/id)arg2;
-(BOOL)isSearchComplete;
-(TUSearchResults *)searchResults;

@end

