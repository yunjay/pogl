

class MeshShaderRenderer{
public:
void renderVs();
void renderVsInstancing(); // Mesh shaders have no "instancing" - its up to the programmer.
void renderMs(); // Mesh shader pipeline
void renderMsIstancing(); // "Instancing" implemented in the mesh shader
}
