/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:23 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Photos/Photos-Structs.h>
@interface PHEntityKeyMap : NSObject {

	NSDictionary* _propertyKeysByEntityKey;
	NSDictionary* _entityKeysByPropertyKey;

}
+(NSDictionary*)transposePropertyKeysByEntityKey:(NSDictionary*)arg1 ;
+(void)assertPropertyKey:(id)arg1 doesNotExistForEntityKey:(id)arg2 inEntityKeysByProperty:(NSDictionary*)arg3 ;
-(id)initWithPropertyKeysByEntityKey:(NSDictionary*)arg1 ;
-(id)entityKeyForPropertyKey:(id)arg1 ;
-(id)propertyKeyForEntityKey:(id)arg1 ;
@end

