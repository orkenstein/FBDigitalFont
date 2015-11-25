#import <Foundation/Foundation.h>

typedef enum {
  FBFontSymbol0 = 0,
  FBFontSymbol1,
  FBFontSymbol2,
  FBFontSymbol3,
  FBFontSymbol4,
  FBFontSymbol5,
  FBFontSymbol6,
  FBFontSymbol7,
  FBFontSymbol8,
  FBFontSymbol9,
  FBFontSymbolA,
  FBFontSymbolB,
  FBFontSymbolC,
  FBFontSymbolD,
  FBFontSymbolE,
  FBFontSymbolF,
  FBFontSymbolG,
  FBFontSymbolH,
  FBFontSymbolI,
  FBFontSymbolJ,
  FBFontSymbolK,
  FBFontSymbolL,
  FBFontSymbolM,
  FBFontSymbolN,
  FBFontSymbolO,
  FBFontSymbolP,
  FBFontSymbolQ,
  FBFontSymbolR,
  FBFontSymbolS,
  FBFontSymbolT,
  FBFontSymbolU,
  FBFontSymbolV,
  FBFontSymbolW,
  FBFontSymbolX,
  FBFontSymbolY,
  FBFontSymbolZ,
  FBFontSymbolArrowUp,
  FBFontSymbolArrowDown,
  FBFontSymbolArrowLeft,
  FBFontSymbolArrowRight,
  FBFontSymbolDash,
  FBFontSymbolSpace,
  FBFontSymbolExclamationMark,
  FBFontSymbolColon,
  FBFontSymbolSharp,
} FBFontSymbolType;

@interface FBFontSymbol : NSObject
+ (NSArray *)symbolsForString:(NSString *)str;
@end
