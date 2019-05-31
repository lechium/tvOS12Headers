/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:20 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PGPeopleTitleUtility : NSObject
+(id)nameStringForPersonNodes:(id)arg1 includeMe:(BOOL)arg2 insertLineBreaks:(BOOL)arg3 ;
+(id)nameStringForPersonNodes:(id)arg1 includeMe:(BOOL)arg2 allowUnnamed:(BOOL)arg3 allowedGroupsFormat:(unsigned long long)arg4 insertLineBreaks:(BOOL)arg5 ;
+(id)peopleGroupNameForPeopleNodes:(id)arg1 allowedGroupsFormat:(unsigned long long)arg2 ;
+(id)beautifiedLocationStringWithPersonNode:(id)arg1 peopleAddressEdge:(id)arg2 insertLineBreak:(BOOL)arg3 ;
+(id)_placeDisplayNameForPeopleAddressNodeLabel:(id)arg1 ;
+(id)_nameFromPersonNode:(id)arg1 ;
+(id)ageStringForPeopleNode:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 ;
+(id)_ageStringWithStartAge:(long long)arg1 endAge:(long long)arg2 ;
+(id)ageStringForPeopleNode:(id)arg1 date:(id)arg2 ;
@end

