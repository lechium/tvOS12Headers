/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:23 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PHFace, PHPerson;

@interface PHPersonSuggestion : NSObject {

	BOOL _confirmed;
	PHFace* _keyFace;
	PHPerson* _person;

}

@property (nonatomic,readonly) PHFace * keyFace;               //@synthesize keyFace=_keyFace - In the implementation block
@property (nonatomic,readonly) PHPerson * person;              //@synthesize person=_person - In the implementation block
@property (nonatomic,readonly) BOOL confirmed;                 //@synthesize confirmed=_confirmed - In the implementation block
-(PHFace *)keyFace;
-(id)initWithKeyFace:(id)arg1 person:(id)arg2 confirmed:(BOOL)arg3 ;
-(BOOL)confirmed;
-(PHPerson *)person;
@end

