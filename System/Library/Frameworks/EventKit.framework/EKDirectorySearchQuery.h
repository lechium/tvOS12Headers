/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:49 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSSet;

@interface EKDirectorySearchQuery : NSObject {

	BOOL _findGroups;
	BOOL _findLocations;
	BOOL _findResources;
	BOOL _findUsers;
	NSSet* _terms;
	unsigned long long _resultLimit;

}

@property (nonatomic,retain) NSSet * terms;                               //@synthesize terms=_terms - In the implementation block
@property (assign,nonatomic) BOOL findGroups;                             //@synthesize findGroups=_findGroups - In the implementation block
@property (assign,nonatomic) BOOL findLocations;                          //@synthesize findLocations=_findLocations - In the implementation block
@property (assign,nonatomic) BOOL findResources;                          //@synthesize findResources=_findResources - In the implementation block
@property (assign,nonatomic) BOOL findUsers;                              //@synthesize findUsers=_findUsers - In the implementation block
@property (assign,nonatomic) unsigned long long resultLimit;              //@synthesize resultLimit=_resultLimit - In the implementation block
-(NSSet *)terms;
-(BOOL)findGroups;
-(BOOL)findLocations;
-(BOOL)findResources;
-(BOOL)findUsers;
-(void)setTerms:(NSSet *)arg1 ;
-(void)setFindGroups:(BOOL)arg1 ;
-(void)setFindLocations:(BOOL)arg1 ;
-(void)setFindResources:(BOOL)arg1 ;
-(void)setFindUsers:(BOOL)arg1 ;
-(void)setResultLimit:(unsigned long long)arg1 ;
-(unsigned long long)resultLimit;
@end

