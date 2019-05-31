/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:08 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface PLRevGeoCompoundNameInfo : NSObject {

	BOOL _isContinuation;
	BOOL _suffixWhenPrefixOnly;
	NSString* _namePrefix;
	NSArray* _sortedNames;
	NSString* _nameSuffix;

}

@property (nonatomic,copy) NSString * namePrefix;                                      //@synthesize namePrefix=_namePrefix - In the implementation block
@property (nonatomic,copy) NSArray * sortedNames;                                      //@synthesize sortedNames=_sortedNames - In the implementation block
@property (nonatomic,copy) NSString * nameSuffix;                                      //@synthesize nameSuffix=_nameSuffix - In the implementation block
@property (assign,nonatomic) BOOL isContinuation;                                      //@synthesize isContinuation=_isContinuation - In the implementation block
@property (assign,nonatomic) BOOL suffixWhenPrefixOnly;                                //@synthesize suffixWhenPrefixOnly=_suffixWhenPrefixOnly - In the implementation block
@property (nonatomic,copy,readonly) NSArray * localizedSortedNames; 
@property (nonatomic,copy,readonly) NSString * localizedTitleForNameInfo; 
+(id)_localizedNameForName:(id)arg1 ;
-(NSArray *)sortedNames;
-(id)dictionaryForInfo;
-(void)setSortedNames:(NSArray *)arg1 ;
-(void)setNamePrefix:(NSString *)arg1 ;
-(NSString *)localizedTitleForNameInfo;
-(NSArray *)localizedSortedNames;
-(void)setIsContinuation:(BOOL)arg1 ;
-(void)setNameSuffix:(NSString *)arg1 ;
-(void)setSuffixWhenPrefixOnly:(BOOL)arg1 ;
-(BOOL)isContinuation;
-(BOOL)suffixWhenPrefixOnly;
-(NSString *)namePrefix;
-(NSString *)nameSuffix;
-(void)dealloc;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
@end
