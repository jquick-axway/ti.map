//
//  TiMapOverlayPattern.h
//  map
//
//  Created by Hans Knöchel on 04.07.17.
//

#import "TiMapConstants.h"
#import <Foundation/Foundation.h>

@interface TiMapOverlayPattern : NSObject

- (instancetype)initWithPatternType:(TiMapOverlyPatternType)patternType andGapLength:(NSInteger)gapLength dashLength:(NSInteger)dashLength;

@property (nonatomic, assign, readonly) TiMapOverlyPatternType type;
@property (nonatomic, assign, readonly) NSInteger gapLength;
@property (nonatomic, assign, readonly) NSInteger dashLength;

@end
