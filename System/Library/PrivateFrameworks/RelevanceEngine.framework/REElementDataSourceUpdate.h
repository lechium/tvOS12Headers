/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:31 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class REElement, NSString;

@interface REElementDataSourceUpdate : NSObject {

	REElement* _element;
	unsigned long long _type;
	NSString* _section;

}

@property (nonatomic,readonly) REElement * element;                  //@synthesize element=_element - In the implementation block
@property (nonatomic,readonly) unsigned long long type;              //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSString * section;                   //@synthesize section=_section - In the implementation block
+(id)reloadElement:(id)arg1 inSection:(id)arg2 ;
+(id)insertElement:(id)arg1 inSection:(id)arg2 ;
+(id)removeElement:(id)arg1 inSection:(id)arg2 ;
+(id)refreshElement:(id)arg1 inSection:(id)arg2 ;
-(REElement *)element;
-(id)initWithElement:(id)arg1 section:(id)arg2 updateType:(unsigned long long)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)section;
-(unsigned long long)type;
@end

