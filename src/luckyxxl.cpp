#include "luckyxxl.hpp"
#include <math.h>
#include "dsp.hpp"


struct LuckyxxlPlugin : Plugin {
	LuckyxxlPlugin() {
		slug = "luckyxxl";
		name = "luckyxxl";
		createModel<DistributeWidget>(this, "Distribute", "Distribute");
		createModel<QuantizeWidget>(this, "Quantize", "Quantize");
	}
};


Plugin *init() {
	return new LuckyxxlPlugin();
}
