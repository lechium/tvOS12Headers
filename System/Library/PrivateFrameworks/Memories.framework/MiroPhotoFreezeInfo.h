/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:19 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Memories/Memories-Structs.h>
#import <Memories/MiroFreezeInfo.h>

@interface MiroPhotoFreezeInfo : MiroFreezeInfo {

	BOOL _added;
	BOOL _removed;
	BOOL _used;
	BOOL _iris;
	double _duration;

}

@property (assign,nonatomic) BOOL added;                   //@synthesize added=_added - In the implementation block
@property (assign,nonatomic) BOOL removed;                 //@synthesize removed=_removed - In the implementation block
@property (assign,nonatomic) BOOL used;                    //@synthesize used=_used - In the implementation block
@property (assign,nonatomic) BOOL iris;                    //@synthesize iris=_iris - In the implementation block
@property (assign,nonatomic) double duration;              //@synthesize duration=_duration - In the implementation block
-(BOOL)isRemoved;
-(id)dataRepresentation;
-(BOOL)isAdded;
-(BOOL)isFreeze;
-(BOOL)removed;
-(void)setRemoved:(BOOL)arg1 ;
-(void)setAdded:(BOOL)arg1 ;
-(BOOL)used;
-(BOOL)added;
-(void)setUsed:(BOOL)arg1 ;
-(BOOL)iris;
-(void)setIris:(BOOL)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDuration:(double)arg1 ;
-(double)duration;
-(id)initWithData:(id)arg1 ;
@end

