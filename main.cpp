#include <iostream>
#include "bitmap_image.hpp"

using namespace std;

void gradient(const rgb_store *col_, const string filename)
{
	const unsigned int dim = 50;
	bitmap_image image(10*dim,dim);

	for (unsigned int x = 0; x < 10*dim; ++x)
	{
		for (unsigned int y = 0; y < dim; ++y)
		{

			image.set_pixel(x,y,col_[2*x].red,col_[2*x].green,col_[2*x].blue);
		}
	}
	image.save_image(filename);

}

int main()
{

	gradient(autumn_colormap,"autumn.bmp");
	gradient(copper_colormap,"copper.bmp");
	gradient(gray_colormap,"gray.bmp");
	gradient(hot_colormap,"hot.bmp");
	gradient(hsv_colormap,"hsv.bmp");
	gradient(jet_colormap,"jet.bmp");
	gradient(prism_colormap,"prism.bmp");
	gradient(vga_colormap,"vga.bmp");
	gradient(yarg_colormap,"yarg.bmp");

	cout << "fin du programme." << endl << endl;
	return 0;
}
