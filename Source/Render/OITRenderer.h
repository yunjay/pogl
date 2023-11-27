#include <vector>
using std::vector;
class OITRenderer{
public:
  static void Render();  
private:
  static void OpaquePass(vector<Mesh> _meshes);
  static void TransparentPass(vector<Mesh> _meshes);
  static void AccumulatePass();

// static members
// Index head image
// pixel value buffer
}
