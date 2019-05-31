/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:44 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CalendarDatabase.framework/CalendarDatabase
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarDatabase/CalendarDatabase-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface CADObjectID : NSObject <NSCopying, NSSecureCoding> {

	BOOL _temporary;
	int _entityType;
	int _entityID;

}

@property (nonatomic,readonly) int entityType;                                 //@synthesize entityType=_entityType - In the implementation block
@property (nonatomic,readonly) int entityID;                                   //@synthesize entityID=_entityID - In the implementation block
@property (getter=isTemporary,nonatomic,readonly) BOOL temporary;              //@synthesize temporary=_temporary - In the implementation block
+(BOOL)supportsSecureCoding;
-(int)entityID;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(id)initWithEntityType:(int)arg1 entityID:(int)arg2 ;
-(id)entityName;
-(id)URIRepresentation;
-(BOOL)isTemporary;
-(int)entityType;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(id)stringRepresentation;
@end
