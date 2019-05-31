/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:05 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVLegacyContentKit/TVLColumnRowViewDataSource.h>

@interface TVLInningsDataSource : TVLColumnRowViewDataSource {

	long long _pageSize;
	long long _currentPage;

}

@property (assign,nonatomic) long long pageSize;                     //@synthesize pageSize=_pageSize - In the implementation block
@property (nonatomic,readonly) long long numberOfPages; 
@property (assign,nonatomic) long long currentPage;                  //@synthesize currentPage=_currentPage - In the implementation block
-(long long)pageSize;
-(void)setPageSize:(long long)arg1 ;
-(id)initWithTableElement:(id)arg1 ;
-(long long)numberOfColumnsInColumnRowView:(id)arg1 ;
-(id)columnRowView:(id)arg1 headerForColumn:(long long)arg2 ;
-(id)columnRowView:(id)arg1 itemForRow:(long long)arg2 inColumn:(long long)arg3 ;
-(void)advanceToNextPage;
-(long long)convertColumn:(long long)arg1 ;
-(void)setCurrentPage:(long long)arg1 ;
-(long long)currentPage;
-(long long)numberOfPages;
@end

