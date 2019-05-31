/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:44 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSOrderedSet;

@interface TVHKVideoCredits : NSObject {

	NSOrderedSet* _actors;
	NSOrderedSet* _directors;
	NSOrderedSet* _producers;
	NSOrderedSet* _screenwriters;

}

@property (nonatomic,copy) NSOrderedSet * actors;                     //@synthesize actors=_actors - In the implementation block
@property (nonatomic,copy) NSOrderedSet * directors;                  //@synthesize directors=_directors - In the implementation block
@property (nonatomic,copy) NSOrderedSet * producers;                  //@synthesize producers=_producers - In the implementation block
@property (nonatomic,copy) NSOrderedSet * screenwriters;              //@synthesize screenwriters=_screenwriters - In the implementation block
@property (nonatomic,readonly) BOOL hasCredits; 
+(id)_arrayFromStringRepresentation:(id)arg1 ;
+(id)_stringRepresentationFromArray:(id)arg1 ;
-(id)initWithStringRepresentation:(id)arg1 ;
-(NSOrderedSet *)actors;
-(void)setActors:(NSOrderedSet *)arg1 ;
-(NSOrderedSet *)directors;
-(void)setDirectors:(NSOrderedSet *)arg1 ;
-(NSOrderedSet *)producers;
-(NSOrderedSet *)screenwriters;
-(void)setProducers:(NSOrderedSet *)arg1 ;
-(void)setScreenwriters:(NSOrderedSet *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)stringRepresentation;
-(BOOL)hasCredits;
@end

